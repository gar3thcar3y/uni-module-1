import requests

data = {
  "messaging_product": "whatsapp",
  "recipient_type": "individual",
  "to": "<WHATSAPP_USER_PHONE_NUMBER>",
  "type": "<MESSAGE_TYPE>",
  #"<MESSAGE_TYPE>": {<MESSAGE_CONTENTS>}
}


requests.post("https://graph.facebook.com/v21.0/<WHATSAPP_BUSINESS_PHONE_NUMBER_ID>/messages", data=data)