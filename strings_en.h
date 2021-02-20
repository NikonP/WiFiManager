/**
 * strings_en.h
 * engligh strings for
 * WiFiManager, a library for the ESP8266/Arduino platform
 * for configuration of WiFi credentials using a Captive Portal
 * 
 * @author Creator tzapu
 * @author tablatronix
 * @version 0.0.0
 * @license MIT
 */

#ifndef _WM_STRINGS_H_
#define _WM_STRINGS_H_

#ifndef WIFI_MANAGER_OVERRIDE_STRINGS
// !!! THIS DOES NOT WORK, you cannot define in a sketch, if anyone one knows how to order includes to be able to do this help!

//https://www.freeformatter.com/css-minifier.html#ad-output
//https://htmlformatter.com/ 
//http://minifycode.com/html-minifier/

const char HTTP_HEAD_START[]       PROGMEM = "<!DOCTYPE html><html lang='en'><head><meta name='format-detection' content='telephone=no'><meta charset='UTF-8'><meta  name='viewport' content='width=device-width,initial-scale=1,user-scalable=no'/><title>{v}</title>";

const char HTTP_CONF_SCRIPT[]      PROGMEM = "<script>function g(a){return document.getElementById(a)};function send(u,t,f){const a=new XMLHttpRequest();a.open('GET',u);a.timeout=t;a.onreadystatechange=function(d){if(a.readyState===4&&a.status===200){f(a.responseText);}};a.send();};window.onload=function(){function states(){function ok(d){var b=JSON.parse(d);Object.keys(b).forEach(function(e){if(g(e)){g(e).innerHTML=b[e];};})};function checkFactor(){var fi=g('factorCold');var fu=g('factorHot');if(fi.value == 2){g('fc_fb_control').removeAttribute('hidden');}else{g('fc_fb_control').setAttribute('hidden', true);}if(fu.value==2){g('fh_fb_control').removeAttribute('hidden');}else{g('fh_fb_control').setAttribute('hidden', true);}};checkFactor();send('/states',500,ok);if(parseInt(g('elapsed').textContent)<4){clearInterval(j);alert('Ватериус выключился. Начните настройку заново, зажав кнопку на 5–10 секунд.');}} states();var j=setInterval(states,2000);function ntw(){function ok2(a){var h='<h3>Выберите свою Wi-Fi сеть</h3>';g('networks').innerHTML=h.concat(a);clearInterval(loadn);};send('/networks',7000,ok2);} ntw();var loadn=setInterval(ntw,8000);function mailCh(){var mail = g('wmail');if(mail.value == 'test@waterius.ru'){mail.value ='';}}mailCh();};function advSett(){var a=g('chbox');var b='none';if(a.checked){b='block'} g('advanced').style.display=b;};function c(a){g('s').value=a.innerText||a.textContent;g('p').focus();};</script>";

const char HTTP_HEAD_END[]         PROGMEM = "</head><body><div class='wrap'>";

const char HTTP_ROOT_MAIN[]        PROGMEM = "<h1>Настройка</h1><p>Не&nbsp;пользуйтесь водой во&nbsp;время настройки</p>";

const char HTTP_DIV_LOGO[]         PROGMEM = "<div class='logo-cont'><div class='logo-img'><svg width='24' height='24' viewBox='0 0 34 34' fill='none' xmlns='http://www.w3.org/2000/svg' alt='логотип Ватериус'><rect width='34' height='34' rx='5' transform='matrix(1 0 0 -1 0 34)' fill='black'></rect><circle r='6.32686' transform='matrix(1 0 0 -1 9.07588 16.9998)' fill='#1655F5'></circle><circle r='6.32686' transform='matrix(1 0 0 -1 24.9226 16.9998)' fill='#F53410'></circle></svg></div><p class='logo-text'>Ватериус</p></div>";

const char * const HTTP_PORTAL_MENU[] PROGMEM = {
"<form action='/wifi'    method='get'><button class='button'>Настроить Ватериус</button></form><br/>\n", // MENU_WIFI
"<form action='/0wifi'   method='get'><button>Configure WiFi (No Scan)</button></form><br/>\n", // MENU_WIFINOSCAN
"<form action='/info'    method='get'><button>Info</button></form><br/>\n", // MENU_INFO
"<form action='/param'   method='get'><button>Setup</button></form><br/>\n",//MENU_PARAM
"<form action='/close'   method='get'><button>Close</button></form><br/>\n", // MENU_CLOSE
"<form action='/restart' method='get'><button>Restart</button></form><br/>\n",// MENU_RESTART
"<form action='/exit'    method='get'><button>Exit</button></form><br/>\n",  // MENU_EXIT
"<form action='/erase'   method='get'><button class='D'>Erase</button></form><br/>\n", // MENU_ERASE
"<hr><br/>" // MENU_SEP
};

// const char HTTP_PORTAL_OPTIONS[]   PROGMEM = strcat(HTTP_PORTAL_MENU[0] , HTTP_PORTAL_MENU[3] , HTTP_PORTAL_MENU[7]);
const char HTTP_PORTAL_OPTIONS[]   PROGMEM = "";
const char HTTP_ITEM_QI[]          PROGMEM = "<div role='img' class='q q-{q} {i} {h}'></div>"; // rssi icons
const char HTTP_ITEM[]             PROGMEM = "<label class='radcnt' onclick='c(this)'>{v}<input type='radio' name='n'><span class='rmrk'></span>{qi}</label>";
// const char HTTP_ITEM[]            PROGMEM = "<div><a href='#p' onclick='c(this)'>{v}</a> {R} {r}% {q} {e}</div>"; // test all tokens

const char WIFI_PAGE_TEXT[]        PROGMEM = "<h1>Настройка</h1>"
"<p class='counter'>Устройство отключится через: <a id='elapsed'>?</a> сек</p>"
"<p id='error'></p>"
"<div id='networks'><h3>Сканируем Wi-Fi сети...</h3></div>";

const char HTTP_FORM_START[]       PROGMEM = "<form method='POST' action='{v}'>";
const char HTTP_FORM_WIFI[]        PROGMEM = "<label class='label' for='s'>Название сети</label><input class='it' id='s' name='s' maxlength='32' autocorrect='off' autocapitalize='none' placeholder='' value='{v}'><br/><br/><label class='label' for='p'>Пароль от Wi-Fi</label><input class='it' id='p' name='p' maxlength='64' placeholder='' value='{pwd}'>";
const char HTTP_FORM_WIFI_END[]    PROGMEM = "";
const char HTTP_FORM_STATIC_HEAD[] PROGMEM = "<br/><br/>";
const char HTTP_FORM_END[]         PROGMEM = "<br/><br/><button type='submit' class='button'>Сохранить</button></form>";
const char HTTP_FORM_LABEL[]       PROGMEM = "<br/><label class='label' for='{i}'>{t}</label>";
const char HTTP_FORM_PARAM_HEAD[]  PROGMEM = "<br/><br/>";
const char HTTP_FORM_PARAM[]       PROGMEM = "<input class='it' id='{i}' name='{n}' maxlength='{l}' value='{v}' {c}><br/>";
const char HTTP_FORM_SELECT[]      PROGMEM = "<select class='it' id='{i}' name='{n}'><option selected value='0'>Авто</option><option value='1'>1</option><option value='10'>10</option> <option value='100'>100</option></select>";
const char HTTP_FORM_SELECT_CUSTOM[] PROGMEM = "<select class='slct' id='{i}' name='{n}'>{c}</select>";

const char HTTP_SCAN_LINK[]        PROGMEM = "<br/><form action='/wifi?refresh=1' method='POST'><button name='refresh' value='1'>Обновить</button></form>";
const char HTTP_SAVED[]            PROGMEM = "<h1>Настройка</h1>"
"<h3>Подключение к Wi-Fi</h3>"
"<p>При успешном подключении через 5&ndash;10&nbsp;секунд погаснет светодиод.</p>"
"<p>Нажмите коротко на&nbsp;кнопку, чтобы Ватериус отправил показания на&nbsp;сайт.</p>"
"<p>Если не&nbsp;удалось подключиться, начните с&nbsp;начала.</p>"
"<form action='/wifi' method='get'> <button class='button-second'>Начать с начала</button></form>";

const char HTTP_PARAMSAVED[]       PROGMEM = "<div class='msg'>Сохранено<br/></div>";
const char HTTP_END[]              PROGMEM = "</div></body></html>"; //div 'wrap'
const char HTTP_ERASEBTN[]         PROGMEM = "<br/><form action='/erase' method='get'><button class='D'>Erase WiFi Config</button></form>";

const char HTTP_STATUS_ON[]        PROGMEM = "<div class='msg P'><strong>Подключен</strong> к {v}<br/><em><small> IP {i}</small></em></div>";
const char HTTP_STATUS_OFF[]       PROGMEM = "<div class='msg {c}'><strong>Отключен</strong> от {v}{r}</div>";
const char HTTP_STATUS_OFFPW[]     PROGMEM = "<br/>Ошибка аутентификации"; // STATION_WRONG_PASSWORD,  no eps32
const char HTTP_STATUS_OFFNOAP[]   PROGMEM = "<br/>Точка доступа не найдена";   // WL_NO_SSID_AVAIL
const char HTTP_STATUS_OFFFAIL[]   PROGMEM = "<br/>Нет соединения"; // WL_CONNECT_FAILED
const char HTTP_STATUS_NONE[]      PROGMEM = "<div class='msg'>Не указана точка доступа</div>";
const char HTTP_BR[]               PROGMEM = "<br/>";

const char HTTP_TITLE_STYLE[]      PROGMEM = "<style>"
"body{text-align:center;font-family:Verdana,sans-serif;width:304px;padding:0 8px;margin:0 auto}div{padding:5px 0 5px 0}button{border-radius:.3rem;width:100%}button{cursor:pointer;border:0;background-color:#1655f5;color:#fff;line-height:2.4rem;font-size:1.2rem}.wrap{text-align:left;display:inline-block;min-width:260px;max-width:500px}.logo-cont{display:flex}.logo-text{display:inline;font-weight:700;color:#1655f5;font-size:30px;line-height:30px;padding-left:15px;margin:0}h1{font-size:50px;line-height:50px;margin-top:30px;margin-bottom:15px;color:#1655f5}h3{font:normal 24px/24px Helvetica;margin:32px 0 16px}.button{display:inline-block;box-sizing:border-box;vertical-align:middle;text-align:center;white-space:nowrap;font-size:20px;line-height:26px;text-decoration:none;cursor:pointer;transition:.5s;border-radius:24px;margin:20px 0;padding:12px 32px;width:253px;color:#fefefe;background-color:#1655f5;box-shadow:0 18px 40px 0 rgba(22,85,245,.3)}.button:hover{color:#e4e4e4;background-color:#2f65ef;cursor:pointer;box-shadow:0 18px 40px 0 rgba(48,103,243,.3)}.button:active{color:#e4e4e4;background-color:#0b45d8;cursor:pointer;box-shadow:0 18px 40px 0 rgba(13,70,216,.3)}"
"</style>";
const char HTTP_CONF_STYLE[]      PROGMEM = "<style>"
".bad,.hot{color:#f44336}.cold{color:#1655f5}.good{color:#25a341}body{text-align:center;font-family:Verdana,sans-serif;width:304px;padding:0 8px;margin:0 auto}div{padding:5px 0 5px 0}button,input[type=button],input[type=submit]{cursor:pointer;border:0;background-color:#1655f5;color:#fff;line-height:2.4rem;font-size:1.2rem}.wrap{text-align:left;display:inline-block;min-width:260px;max-width:500px}.q{height:16px;margin:0;padding:0 5px;text-align:right;min-width:38px;float:right}.q:after{background-position-x:0}.q.q-1:after{background-position-x:-16px}.q.q-2:after{background-position-x:-32px}.q.q-3:after{background-position-x:-48px}.q.q-4:after{background-position-x:-64px}.q.l:before{background-position-x:-80px;padding-right:5px}.q:after,.q:before{content:'';width:16px;height:16px;display:inline-block;background-repeat:no-repeat;background-position:16px 0;background-image:url(data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAGAAAAAQCAMAAADeZIrLAAAAJFBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADHJj5lAAAAC3RSTlMAIjN3iJmqu8zd7vF8pzcAAABsSURBVHja7Y1BCsAwCASNSVo3/v+/BUEiXnIoXkoX5jAQMxTHzK9cVSnvDxwD8bFx8PhZ9q8FmghXBhqA1faxk92PsxvRc2CCCFdhQCbRkLoAQ3q/wWUBqG35ZxtVzW4Ed6LngPyBU2CobdIDQ5oPWI5nCUwAAAAASUVORK5CYII=)}@media(-webkit-min-device-pixel-ratio:2),(min-resolution:192dpi){.q:after,.q:before{background-image:url(data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAALwAAAAgCAMAAACfM+KhAAAALVBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADAOrOgAAAADnRSTlMAESIzRGZ3iJmqu8zd7gKjCLQAAACmSURBVHgB7dDBCoMwEEXRmKlVY3L//3NLhyzqIqSUggy8uxnhCR5Mo8xLt+14aZ7wwgsvvPA/ofv9+44334UXXngvb6XsFhO/VoC2RsSv9J7x8BnYLW+AjT56ud/uePMdb7IP8Bsc/e7h8Cfk912ghsNXWPpDC4hvN+D1560A1QPORyh84VKLjjdvfPFm++i9EWq0348XXnjhhT+4dIbCW+WjZim9AKk4UZMnnCEuAAAAAElFTkSuQmCC);background-size:95px 16px}}.logo-cont{display:flex}.logo-text{display:inline;font-weight:700;color:#1655f5;font-size:30px;line-height:30px;padding-left:15px;margin:0}h1{font-size:50px;line-height:50px;margin-top:30px;margin-bottom:15px;color:#1655f5}h3{font:normal 24px/24px Helvetica;margin:32px 0 16px}.button{display:inline-block;box-sizing:border-box;vertical-align:middle;text-align:center;white-space:nowrap;font-size:20px;line-height:26px;text-decoration:none;cursor:pointer;transition:.5s;border-radius:24px;margin:20px 0;padding:12px 32px;width:253px;color:#fefefe;background-color:#1655f5;box-shadow:0 18px 40px 0 rgba(22,85,245,.3)}.button:hover{color:#e4e4e4;background-color:#2f65ef;cursor:pointer;box-shadow:0 18px 40px 0 rgba(48,103,243,.3)}.button:active{color:#e4e4e4;background-color:#0b45d8;cursor:pointer;box-shadow:0 18px 40px 0 rgba(13,70,216,.3)}.cnt,.radcnt{display:block;position:relative;padding-left:35px;margin-bottom:12px;cursor:pointer;-webkit-user-select:none;-moz-user-select:none;-ms-user-select:none;user-select:none}.cnt input,.radcnt input{position:absolute;opacity:0;cursor:pointer}.cnt input{height:0;width:0}.mrk,.rmrk{position:absolute;top:0;left:0;height:25px;width:25px;background-color:#eee}.rmrk{border-radius:50%}.cnt:hover input ~ .mrk{background-color:#ccc}.cnt input:checked ~ .mrk{background-color:#1655f5}.radcnt:hover input ~ .rmrk{background-color:#ccc}.radcnt input:checked ~ .rmrk{background-color:#1655f5}.mrk:after,.rmrk:after{content:'';position:absolute;display:none}.cnt input:checked ~ .mrk:after{display:block}.radcnt input:checked ~ .rmrk:after{display:block}.cnt .mrk:after{left:9px;top:5px;width:5px;height:10px;border:solid #fff;border-width:0 3px 3px 0;-webkit-transform:rotate(45deg);-ms-transform:rotate(45deg);transform:rotate(45deg)}.radcnt .rmrk:after{left:9px;top:9px;width:8px;height:8px;border-radius:50%;background:#fff}.label{font-size:16px;font-weight:bold;display:block}.it{background:transparent;-webkit-appearance:none;-moz-appearance:none;appearance:none;outline:0;border:0 none;border-bottom:.25px solid #bbb;font-size:20px;padding:6.88px 8px 6.88px 0;font-family:Helvetica,sans-serif;font-weight:lighter;line-height:17.6px;width:260px!important;-webkit-border-radius:0;-moz-border-radius:0;border-radius:0}.slct{background:transparent;-webkit-appearance:none;-moz-appearance:none;appearance:none;outline:0;border:0 none;border-bottom:1px solid #bbb;font-size:20px;padding:8px 8px 8px 0;font-family:Helvetica,sans-serif;font-weight:lighter;line-height:20px;width:260px!important;-webkit-border-radius:0;-moz-border-radius:0;border-radius:0}.counter{position:sticky;top:8px;font-weight:bold;color:#f53410}"
"</style>";
const char HTTP_END_STYLE[]      PROGMEM = "<style>"
"body{text-align:center;font-family:Verdana,sans-serif;width:304px;padding:0 8px;margin:0 auto}div{padding:5px 0 5px 0}.wrap{text-align:left;display:inline-block;min-width:260px;max-width:500px}.logo-cont{display:flex}.logo-text{display:inline;font-weight:700;color:#1655f5;font-size:30px;line-height:30px;padding-left:15px;margin:0}h1{font-size:50px;line-height:50px;margin-top:30px;margin-bottom:15px;color:#1655f5}h3{font:normal 24px/24px Helvetica;margin:32px 0 16px}.button-second{display:inline-block;box-sizing:border-box;vertical-align:middle;text-align:center;white-space:nowrap;font-size:20px;line-height:26px;text-decoration:none;cursor:pointer;transition:.5s;border-radius:24px;margin:20px 0;padding:12px 32px;width:253px;color:#1655f5;background-color:#fff;border:1px solid #1655f5}.button-second:hover{color:#93aef3;border:1px solid #93aef3}.button-second:active{color:#0b45d8;border:1px solid #0b45d8}"
"</style>";


const char HTTP_HELP[]             PROGMEM =
 "<br/><h3>Available Pages</h3><hr>"
 "<table class='table'>"
 "<thead><tr><th>Page</th><th>Function</th></tr></thead><tbody>"
 "<tr><td><a href='/'>/</a></td>"
 "<td>Menu page.</td></tr>"
 "<tr><td><a href='/wifi'>/wifi</a></td>"
 "<td>Show WiFi scan results and enter WiFi configuration.(/0wifi noscan)</td></tr>"
 "<tr><td><a href='/wifisave'>/wifisave</a></td>"
 "<td>Save WiFi configuration information and configure device. Needs variables supplied.</td></tr>"
 "<tr><td><a href='/param'>/param</a></td>"
 "<td>Parameter page</td></tr>"
 "<tr><td><a href='/info'>/info</a></td>"
 "<td>Information page</td></tr>"
 "<tr><td><a href='/close'>/close</a></td>"
 "<td>Close the captiveportal popup,configportal will remain active</td></tr>"
 "<tr><td><a href='/exit'>/exit</a></td>"
 "<td>Exit Config Portal, configportal will close</td></tr>"
 "<tr><td><a href='/restart'>/restart</a></td>"
 "<td>Reboot the device</td></tr>"
 "<tr><td><a href='/erase'>/erase</a></td>"
 "<td>Erase WiFi configuration and reboot Device. Device will not reconnect to a network until new WiFi configuration data is entered.</td></tr>"
 "</table>"
 "<p/>More information about WiFiManager at <a href='https://github.com/tzapu/WiFiManager'>https://github.com/tzapu/WiFiManager</a>.";




// Info html
#ifdef ESP32
	const char HTTP_INFO_esphead[]    PROGMEM = "<h3>esp32</h3><hr><dl>";
	const char HTTP_INFO_chiprev[]    PROGMEM = "<dt>Chip Rev</dt><dd>{1}</dd>";
  const char HTTP_INFO_lastreset[]    PROGMEM = "<dt>Last reset reason</dt><dd>CPU0: {1}<br/>CPU1: {2}</dd>";
  const char HTTP_INFO_aphost[]       PROGMEM = "<dt>Acccess Point Hostname</dt><dd>{1}</dd>";  
#else 
	const char HTTP_INFO_esphead[]    PROGMEM = "<h3>esp8266</h3><hr><dl>";
	const char HTTP_INFO_flashsize[]  PROGMEM = "<dt>Real Flash Size</dt><dd>{1} bytes</dd>";
	const char HTTP_INFO_fchipid[]    PROGMEM = "<dt>Flash Chip ID</dt><dd>{1}</dd>";
	const char HTTP_INFO_corever[]    PROGMEM = "<dt>Core Version</dt><dd>{1}</dd>";
	const char HTTP_INFO_bootver[]    PROGMEM = "<dt>Boot Version</dt><dd>{1}</dd>";
	const char HTTP_INFO_memsketch[]  PROGMEM = "<dt>Memory - Sketch Size</dt><dd>Used / Total bytes<br/>{1} / {2}";
	const char HTTP_INFO_memsmeter[]  PROGMEM = "<br/><progress value='{1}' max='{2}'></progress></dd>";
	const char HTTP_INFO_lastreset[]  PROGMEM = "<dt>Last reset reason</dt><dd>{1}</dd>";
#endif

const char HTTP_INFO_freeheap[]   PROGMEM = "<dt>Memory - Free Heap</dt><dd>{1} bytes available</dd>"; 
const char HTTP_INFO_wifihead[]   PROGMEM = "<br/><h3>WiFi</h3><hr>";
const char HTTP_INFO_uptime[]     PROGMEM = "<dt>Uptime</dt><dd>{1} Mins {2} Secs</dd>";
const char HTTP_INFO_chipid[]     PROGMEM = "<dt>Chip ID</dt><dd>{1}</dd>";
const char HTTP_INFO_idesize[]    PROGMEM = "<dt>Flash Size</dt><dd>{1} bytes</dd>";
const char HTTP_INFO_sdkver[]     PROGMEM = "<dt>SDK Version</dt><dd>{1}</dd>";
const char HTTP_INFO_cpufreq[]    PROGMEM = "<dt>CPU Frequency</dt><dd>{1}MHz</dd>";
const char HTTP_INFO_apip[]       PROGMEM = "<dt>Access Point IP</dt><dd>{1}</dd>";
const char HTTP_INFO_apmac[]      PROGMEM = "<dt>Access Point MAC</dt><dd>{1}</dd>";
const char HTTP_INFO_apssid[]     PROGMEM = "<dt>SSID</dt><dd>{1}</dd>";
const char HTTP_INFO_apbssid[]    PROGMEM = "<dt>BSSID</dt><dd>{1}</dd>";
const char HTTP_INFO_staip[]      PROGMEM = "<dt>Station IP</dt><dd>{1}</dd>";
const char HTTP_INFO_stagw[]      PROGMEM = "<dt>Station Gateway</dt><dd>{1}</dd>";
const char HTTP_INFO_stasub[]     PROGMEM = "<dt>Station Subnet</dt><dd>{1}</dd>";
const char HTTP_INFO_dnss[]       PROGMEM = "<dt>DNS Server</dt><dd>{1}</dd>";
const char HTTP_INFO_host[]       PROGMEM = "<dt>Hostname</dt><dd>{1}</dd>";
const char HTTP_INFO_stamac[]     PROGMEM = "<dt>Station MAC</dt><dd>{1}</dd>";
const char HTTP_INFO_conx[]       PROGMEM = "<dt>Connected</dt><dd>{1}</dd>";
const char HTTP_INFO_autoconx[]   PROGMEM = "<dt>Autoconnect</dt><dd>{1}</dd>";
const char HTTP_INFO_temp[]       PROGMEM = "<dt>Temperature</dt><dd>{1} C&deg; / {2} F&deg;</dd>";

// Strings
const char S_y[]                  PROGMEM = "Yes";
const char S_n[]                  PROGMEM = "No";
const char S_enable[]             PROGMEM = "Enabled";
const char S_disable[]            PROGMEM = "Disabled";
const char S_GET[]                PROGMEM = "GET";
const char S_POST[]               PROGMEM = "POST";
const char S_NA[]                 PROGMEM = "Unknown";

const char S_titlewifisaved[]     PROGMEM = "Попытка подключения";
const char S_titlewifi[]          PROGMEM = "Настройка Ватериуса";
const char S_titleinfo[]          PROGMEM = "Info";
const char S_titleparam[]         PROGMEM = "Setup";
const char S_titleparamsaved[]    PROGMEM = "Setup Saved";
const char S_titleexit[]          PROGMEM = "Exit";
const char S_titlereset[]         PROGMEM = "Reset";
const char S_titleerase[]         PROGMEM = "Erase";
const char S_titleclose[]         PROGMEM = "Close";
const char S_options[]            PROGMEM = "Настройка Ватериуса";
const char S_nonetworks[]         PROGMEM = "Wi-Fi сети не найдены. Перезагрузите страницу для повторного сканирования.";

const char S_staticip[]           PROGMEM = "Static IP";
const char S_staticgw[]           PROGMEM = "Static Gateway";
const char S_staticdns[]          PROGMEM = "Static DNS";
const char S_subnet[]             PROGMEM = "Subnet";
const char S_exiting[]            PROGMEM = "Exiting";
const char S_resetting[]          PROGMEM = "Module will reset in a few seconds.";
const char S_closing[]            PROGMEM = "You can close the page, portal will continue to run";
const char S_error[]              PROGMEM = "An Error Occured";
const char S_notfound[]           PROGMEM = "File Not Found\n\n";
const char S_uri[]                PROGMEM = "URI: ";
const char S_method[]             PROGMEM = "\nMethod: ";
const char S_args[]               PROGMEM = "\nArguments: ";
const char S_parampre[]           PROGMEM = "param_";

// debug strings
const char D_HR[]                 PROGMEM = "--------------------";

// END WIFI_MANAGER_OVERRIDE_STRINGS
#endif

// -----------------------------------------------------------------------------------------------
// DO NOT EDIT BELOW THIS LINE

const uint8_t _nummenutokens = 9;
const char * const _menutokens[9] PROGMEM = {
    "wifi",
    "wifinoscan",
    "info",
    "param",
    "close",
    "restart",
    "exit",
    "erase",
    "sep"
};

const char R_root[]               PROGMEM = "/";
const char R_wifi[]               PROGMEM = "/wifi";
const char R_wifinoscan[]         PROGMEM = "/0wifi";
const char R_wifisave[]           PROGMEM = "/wifisave";
const char R_info[]               PROGMEM = "/info";
const char R_param[]              PROGMEM = "/param";
const char R_paramsave[]          PROGMEM = "/paramsave";
const char R_restart[]            PROGMEM = "/restart";
const char R_exit[]               PROGMEM = "/exit";
const char R_close[]              PROGMEM = "/close";
const char R_erase[]              PROGMEM = "/erase"; 
const char R_status[]             PROGMEM = "/status";


//Strings
const char S_ip[]                 PROGMEM = "ip";
const char S_gw[]                 PROGMEM = "gw";
const char S_sn[]                 PROGMEM = "sn";
const char S_dns[]                PROGMEM = "dns";

// softap ssid default prefix
#ifdef ESP8266
	const char S_ssidpre[]        PROGMEM = "ESP";
#elif defined(ESP32)
	const char S_ssidpre[]        PROGMEM = "ESP32";
#else
	const char S_ssidpre[]        PROGMEM = "WM";
#endif

//Tokens
//@todo consolidate and reduce
const char T_ss[]                 PROGMEM = "{"; // token start sentinel
const char T_es[]                 PROGMEM = "}"; // token end sentinel
const char T_1[]                  PROGMEM = "{1}"; // @token 1
const char T_2[]                  PROGMEM = "{2}"; // @token 2
const char T_v[]                  PROGMEM = "{v}"; // @token v
const char T_I[]                  PROGMEM = "{I}"; // @token I
const char T_i[]                  PROGMEM = "{i}"; // @token i
const char T_n[]                  PROGMEM = "{n}"; // @token n
const char T_p[]                  PROGMEM = "{p}"; // @token p
const char T_t[]                  PROGMEM = "{t}"; // @token t
const char T_l[]                  PROGMEM = "{l}"; // @token l
const char T_c[]                  PROGMEM = "{c}"; // @token c
const char T_e[]                  PROGMEM = "{e}"; // @token e
const char T_q[]                  PROGMEM = "{q}"; // @token q
const char T_r[]                  PROGMEM = "{r}"; // @token r
const char T_R[]                  PROGMEM = "{R}"; // @token R
const char T_h[]                  PROGMEM = "{h}"; // @token h

// http
const char HTTP_HEAD_CT[]         PROGMEM = "text/html";
const char HTTP_HEAD_CT2[]        PROGMEM = "text/plain";
const char HTTP_HEAD_CORS[]       PROGMEM = "Access-Control-Allow-Origin";
const char HTTP_HEAD_CORS_ALLOW_ALL[]  PROGMEM = "*";

const char * const WIFI_STA_STATUS[] PROGMEM
{
  "WL_IDLE_STATUS",     // 0 STATION_IDLE
  "WL_NO_SSID_AVAIL",   // 1 STATION_NO_AP_FOUND
  "WL_SCAN_COMPLETED",  // 2
  "WL_CONNECTED",       // 3 STATION_GOT_IP
  "WL_CONNECT_FAILED",  // 4 STATION_CONNECT_FAIL, STATION_WRONG_PASSWORD(NI)
  "WL_CONNECTION_LOST", // 5
  "WL_DISCONNECTED",    // 6 
  "WL_STATION_WRONG_PASSWORD" // 7 KLUDGE 
};

#ifdef ESP32
const char * const AUTH_MODE_NAMES[] PROGMEM
{
    "OPEN",
    "WEP",             
    "WPA_PSK",         
    "WPA2_PSK",        
    "WPA_WPA2_PSK",    
    "WPA2_ENTERPRISE", 
    "MAX"
};
#elif defined(ESP8266)
const char * const AUTH_MODE_NAMES[] PROGMEM
{
    "",
    "",
    "WPA_PSK",      // 2 ENC_TYPE_TKIP
    "",
    "WPA2_PSK",     // 4 ENC_TYPE_CCMP
    "WEP",          // 5 ENC_TYPE_WEP
    "",
    "OPEN",         //7 ENC_TYPE_NONE
    "WPA_WPA2_PSK", // 8 ENC_TYPE_AUTO
};
#endif

const char* const WIFI_MODES[] PROGMEM = { "NULL", "STA", "AP", "STA+AP" };


#ifdef ESP32
// as 2.5.2
// typedef struct {
//     char                  cc[3];   /**< country code string */
//     uint8_t               schan;   /**< start channel */
//     uint8_t               nchan;   /**< total channel number */
//     int8_t                max_tx_power;   /**< This field is used for getting WiFi maximum transmitting power, call esp_wifi_set_max_tx_power to set the maximum transmitting power. */
//     wifi_country_policy_t policy;  /**< country policy */
// } wifi_country_t;
const wifi_country_t WM_COUNTRY_US{"US",1,11,CONFIG_ESP32_PHY_MAX_TX_POWER,WIFI_COUNTRY_POLICY_AUTO};
const wifi_country_t WM_COUNTRY_CN{"CN",1,13,CONFIG_ESP32_PHY_MAX_TX_POWER,WIFI_COUNTRY_POLICY_AUTO};
const wifi_country_t WM_COUNTRY_JP{"JP",1,14,CONFIG_ESP32_PHY_MAX_TX_POWER,WIFI_COUNTRY_POLICY_AUTO};
#elif defined(ESP8266)
// typedef struct {
//     char cc[3];               /**< country code string */
//     uint8_t schan;            /**< start channel */
//     uint8_t nchan;            /**< total channel number */
//     uint8_t policy;           /**< country policy */
// } wifi_country_t;
const wifi_country_t WM_COUNTRY_US{"US",1,11,WIFI_COUNTRY_POLICY_AUTO};
const wifi_country_t WM_COUNTRY_CN{"CN",1,13,WIFI_COUNTRY_POLICY_AUTO};
const wifi_country_t WM_COUNTRY_JP{"JP",1,14,WIFI_COUNTRY_POLICY_AUTO};
#endif

#endif