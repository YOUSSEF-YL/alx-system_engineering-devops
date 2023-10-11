# Understanding Web Infrastructure
Surely many of us have wondered “what happens when we type any URL into a browser and hit enter?” In fact, it is usually helpful to have at least some familiarity with the mechanics of data transportation from the internet to our computers and the processes that occur behind our browsers.

![google](https://lh3.googleusercontent.com/pw/ADCreHecEpP-RBaj1aX0-6Kl643uMYufzInR7hDFXM_DnqpBkx1QGZIQYskfOj9SWrMZnyDDfYNcbt6x9jxS7TvREbI2cUDJhDtGm1D2-KSnUS_o2TvZZ9Y3hz2INpICmg71WlDugWr51EZCqoGUFVUTtW02tUagRI8Gf3niWIRTqUSAa2yxwQrBKI54CAw-jvREcT_nm7JUGHkJxo_qGHZmtRNGAYZFdxs2I374VruS1qbJnBFsayXcZbaClyb-1KEMPAv0oueRNzV-HqcChnGCLa8Hf8UVnD9SN71A7vrpT6Gff2YTBQ86raT_pxHy2kAPs3txiHPri2dPTNKMtERBlgSTfnq0U8mER2K1cKq2bqG2P6SRs25FG_Vs3CIAYAZczzM3tSaMjTNtffEye-dGqRwDhJwOamuI-o53PLgaiH_ebNv10YOe6RNaquO6f83IPHAd8WCn-jjgF78eDyY85VCpWar8vro8hI9aHZb48EeI36EkHA0Suivk8woGv0-qM7_6srCdaurk6Dpz6gKeTYSR3XW3FGYFojbnaz4pY1fEuuvk5f0OH3NH6mn_UtCHhcs3uG2Qt8jK4JiGrBMVg2wZIP43NhHI8gsYBBEdQvZO_nJ2ErDtcJJNtU-i6yR8AEemdp7Y9lmgyzFFF8rb5omIMEzlRCQjsRwutlo4hd48HbjBEXnr6sHFucbuvGErCbbPKmERQuGPdSnfGddHYlO2l3zditbXZSPihKFzEFT7EFbiXQpX0yKY-TSfn2SCw18dMg2SV274xIE2Z2CEG4MoM8ktQuZjOlrltFVbM3YTlFsn55zs6Z6x4qUFdqYjtn8pP_L9Wheo25wij6jy0N0nTJrgKP8__BDB0MPftCeN1YY77rsfzTeaAJSvkBZNL6mh-GdAFNYJ3IqQXqskaZjjow=w720-h404-s-no?authuser=0)


 ![DNS Request](https://lh3.googleusercontent.com/pw/ADCreHeu0-NOcUW8CIJuERUKDKtTXRkJx1gdrE9Wny6ZrDuQHkcy3alNW5wa571mPIk7-6CtfB8bvq0eF4S4earFrBVDGGpoI5ENYVBfr2SmLGWA6G34TIvUTKsa6y8RIUqIHQ4XgT7UXne9zelNVJFysITA1IpzR9xJ9caAKC0QKImts6y-3lIIpeQFyiybe7gC68gN4R8k647PXBeTD0Dqgw_ReCZZEDLznpa069FEmUZCKmkiInTrqLjXFuzl_ZKRsHzJ_nKrsvHvo2-NuZfgUcyR5Drtn22Dg_ZF5krbr95luUwiYL4uspsXEF-5tfRv22qK_nhOcAh4_2UlUdiMoVJlWODiR69bkywCT9tSeO0mY5TKJeITLR1GCy21QglxHWPGuDdSpZiMGFEFfhU2u1AuMgjoRwUTB3poLk2YkaEufmgkgkRzt-u256qFQp263w0lFoqDIYCWWGLkkAmOy5GwehIl5jx3NayFnUyeRxPF5jAt4sO6WK8VdyzD3QO4o48UHF-3PJp9qdOr1O6VarQ-tyxFYmsc2OoWRssMYQhkWV0sic8s83lEyNb4CIhuZ0t0LvzoN3-KYrM5z5wfZRo3GcFziSOeg1Hzaqok53ccoaD72jK-YAiGt6jA9Jb6cF6uFaoQRu26Fxv2kP1eCVzxsKCV1YHQXR3yuFlkK02_QHsoUt1h9alBV4EUicVktOO6jF_yAfk1ul_jGHGTfHURQYJ8wkqZXpWe7dLZmQSAiEc7mAWCusRJQ9IZIUCOb-wat_5o65gOWDyeznn_HnExk4-5NAqQefhn92MlBwt0fflwSFRwUL160h16rNCFbeEfjc9Ag7viAF5egWn9yWyro2qj_kOHoNUBClPAhekkEOE0IKsojnXyjjYeKGFhfaBmNHE7aozWIq3b7i9MTnvvhw=w560-h759-s-no?authuser=0)

## DNS Request

When you enter a URL into your browser and hit Enter, a series of processes unfold to bring you the desired webpage.

### Web Infrastructure FlowChart

1. **DNS REQUEST**

   - The browser initiates a DNS query to find the IP address of the server hosting the webpage.
   - DNS client checks browser/OS cache, then Resolver server, and eventually root servers if needed.
   - The authoritative name server provides the IP address, and the resolver saves this information.

   ![DNS Request](https://photos.google.com/photo/AF1QipOCNksiJ08wWLc-AfGiFx7noWxKfl2LrBSXTQSN)

2. **TCP/IP**

   - The browser sends a request to the website's server using TCP/IP for communication.
   - TCP/IP operates in layers (Application, Transport, Internet, Network Access) to ensure effective data transmission.
   - Protocols like HTTP, HTTPS, and FTP govern communication between the browser and server.

   ![TCP/IP](https://photos.google.com/photo/AF1QipO98i7zjpdOprhyNrVdcawC44G8Cu6rPgMLT47d)

3. **FIREWALLS**

   - Firewalls monitor incoming and outgoing network traffic, enhancing security by allowing or restricting communication based on predefined criteria.
   - Malware risks are mitigated by tracking conversations and exchanged packets.

   ![Firewall](https://photos.google.com/photo/AF1QipOEmeOjpLVRLmVDR3Ad3mCp1eWlNBkxn2rrl0oe)

4. **HTTPS/SSL**

   - HTTPS handles encrypted communication between the browser and server.
   - SSL (Secure Sockets Layer) ensures secure connections, and an SSL handshake process occurs at the beginning of the connection.

   ![SSL Handshake](https://media.licdn.com/dms/image/C4D12AQHCYoiG2PNQBA/article-cover_image-shrink_600_2000/0/1520203424571?e=2147483647&v=beta&t=lDIn6zV0TTjh4vYwkVcaOcH43dwg4XSr8b4VSYtO6Tk)

5. **LOAD-BALANCER**

   - To handle high traffic, load balancers distribute requests from clients to multiple servers.
   - They ensure efficient load distribution, enhancing website performance.

   ![Load Balancer](https://www.netscaler.com/content/dam/netscaler/images/graphics/infographics/what-is-load-balancing.png)

6. **WEB SERVER & APPLICATION SERVER**

   - Web servers process requests and deliver static content, while application servers handle dynamic content and business logic.
   - When you type a URL, the servers respond by sending the requested content.

   ![Web & App Servers](https://i.ytimg.com/vi/thJSev60yfg/maxresdefault.jpg)

7. **DATABASE**

   - Databases store structured data for quick retrieval and maintenance.
   - Application servers communicate with database servers to manage data, providing tailored content based on user needs.


## Conclusion

This overview provides a glimpse into the intricate processes that occur when you interact with the web. I hope it satisfies your curiosity about the journey from entering a URL to receiving webpage content. Thank you for visiting!
