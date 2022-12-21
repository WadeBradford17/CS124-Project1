Wade Bradford
CS 124
Project 1

REPORT

1.) What do each of the attributes represent?
- Streamer Name: The username associated with the Twitch.TV streamer's account.
- Watch Time: Total time viewers spent watching the streamer acrued over the year. (MINUTES)
- Stream Time: Total time the streamer spent streaming in the year. (MINUTES)
- Peak Viewers: The most amount of viewers the streamer had at one time.
- Average Viewers: The average number of viewers the streamer had during a livestream.
- Followers: The amount of followers the streamer has.
- Followers Gained: The amount of followers the streamer gained in the year.
- Views Gained: The amount of viewers the streamed gained in the year.
- Partnered: Whether the streamer is partnered with Twitch or not.
- Mature: Whether the streamer is considered for mature audiences.
- Language: What language the streamer livestreams in.


2.) Where did I get the data from?
I got the data set from a github repository called "Awesome Public Datasets" compiled by a number of contributors. More specifically, I selected the "Top Streamers On Twitch" dataset of 1000 streams put together by AAYUSH MISHRA on Kaggle. (https://www.kaggle.com/datasets/aayushmishra1512/twitchdata)

3.) Why did I choose this data set?
I chose this dataset as I have walked Twich.TV in the past and recognized a few names from the dataset. It was also intriguing to see how vast it was, with varying levels of followers and watch time. Additionally, it was neat to whether the streamer was partnered or not as many stream for a living.

4.) The entries are sorted initially by total watch time, with the streamer with the most watch time at the top.

5.) How do you know your functions work correctly?
I know my functions work correctly as my readDataFromFile method is tested in the beginning portion of main, displaying the first and last streamer names of the vector. During testing the getters can be swapped with the other attributes and get equally accurate returns. My calculateAverageFollowers function works properly as it loops through the vector adding followers together until dividing by a counter. It can actually be fact-checked on the Kaggle display of the dataset, which automatically compiles an average of the column.

6.) I chose this calculation as I'm familiar with creating a for loop that can loop through a vector. I was also interested in seeing what the average would be, and the comparing it to both the most followed and least followed of the dataset.
