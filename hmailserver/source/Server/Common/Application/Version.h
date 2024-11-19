#pragma once
#define HMAILSERVER_VERSION "5.7.0"
#define HMAILSERVER_VERSION_NUMERIC 5,7,0,5002
#define HMAILSERVER_BUILD 5002
#define HMAILSERVER_FORK "maxsnts"

/*
B5000
[*]Fix: Apple IOS related HM5136, HM4208 and subsequent "OutOfMemoryHandler" errors 
   [url=https://github.com/hmailserver/hmailserver/issues/475]issue 475[/url], credits to 
   Rado https://github.com/hunterius-prime

[*]Fix: IMAP FETCH on message/rfc822 MIME part 
   [url=https://github.com/hmailserver/hmailserver/issues/459]issue 459[/url], credits to 
   Rado https://github.com/hunterius-prime

B5001
[*]Update: Replacement for the old SA "winsock error 2" workaround/fix and eliminates (all) 
   EOF errors/warnings (and forced disconnects, possible related to HM5136?) altogether
*/

/*
POSSIBLE FIX TO IMPORT:
IMAP FOLDERS: https://github.com/hgy29/hmailserver/commit/5834b12ca21fdfdda4e2c663e170e3379f5315ff
*/
