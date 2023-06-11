using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

public class MultipleImageTracker : MonoBehaviour
{
    private ARTrackedImageManager trackedImageManager;

    [SerializeField]
    private GameObject[] placablePrefabs;

    private Dictionary<string, GameObject> spawnedObject;

    private void Awake()
    {
        trackedImageManager = GetComponent<ARTrackedImageManager>();
        spawnedObject = new Dictionary<string, GameObject>();

        foreach (GameObject obj in placablePrefabs)
        {
            GameObject newObject = Instantiate(obj);
            newObject.name = obj.name;
            newObject.SetActive(false);

            spawnedObject.Add(newObject.name, newObject);
        }
    }

    private void OnEnable()
    {
        trackedImageManager.trackedImagesChanged += OnTrakcedImageChanged;
    }

    private void OnDisable()
    {
        trackedImageManager.trackedImagesChanged -= OnTrakcedImageChanged;
    }

    void OnTrakcedImageChanged(ARTrackedImagesChangedEventArgs eventArgs)
    {
        foreach (ARTrackedImage trackedImage in eventArgs.added)
        {
            UpdateSpawnObject(trackedImage);
        }
        foreach (ARTrackedImage trackedImage in eventArgs.updated)
        {
            UpdateSpawnObject(trackedImage);
        }
        foreach (ARTrackedImage trackedImage in eventArgs.removed)
        {
            spawnedObject[trackedImage.referenceImage.name].SetActive(false);
        }
    }

    void UpdateSpawnObject(ARTrackedImage trackedImage)
    {
        string referenceImageName = trackedImage.referenceImage.name;

        // Update the spawned object with the tracked image's position and rotation
        spawnedObject[referenceImageName].transform.position = trackedImage.transform.position;
        spawnedObject[referenceImageName].transform.rotation = trackedImage.transform.rotation;

        spawnedObject[referenceImageName].SetActive(true);
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        // Log the number of tracked images being tracked
        Debug.Log($"There are {trackedImageManager.trackables.count} images being tracked");

        // Log the name and position of each tracked image
        foreach (var trackedImage in trackedImageManager.trackables)
        {
            Debug.Log($"Image: {trackedImage.referenceImage.name} is at " +
                        $"{trackedImage.transform.position}");
        }
    }
}
