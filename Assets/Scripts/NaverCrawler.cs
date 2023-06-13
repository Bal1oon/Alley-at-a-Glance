using System;
using System.Net;
using System.Text;
using System.IO;

namespace NaverCrawler
{
    public class APIExamSearchBlog
    {
        static void Main(string[] args)
        {
            string query = "restaurant_name"; // The search string
            string clientId = "qoq3YNKfSup1W2jNtaiN"; // Client ID
            string clientSecret = "EWhrqncleL"; // Client Secret

            string url = "https://openapi.naver.com/v1/search/blog?query=" + Uri.EscapeDataString(query);

            HttpWebRequest request = (HttpWebRequest)WebRequest.Create(url);
            request.Headers.Add("X-Naver-Client-Id", clientId);
            request.Headers.Add("X-Naver-Client-Secret", clientSecret);

            HttpWebResponse response = (HttpWebResponse)request.GetResponse();
            string status = response.StatusCode.ToString();

            if (status == "OK")
            {
                Stream stream = response.GetResponseStream();
                StreamReader reader = new StreamReader(stream, Encoding.UTF8);
                string text = reader.ReadToEnd();
                Console.WriteLine(text);
            }
            else
            {
                Console.WriteLine("Error occurred: " + status);
            }
        }
    }
}
