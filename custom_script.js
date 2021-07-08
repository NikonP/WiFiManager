function g(a) {
    return document.getElementById(a);
}
;
function send(u, t, f) {
    const a = new XMLHttpRequest();
    a.open('GET', u);
    a.timeout = t;
    a.onreadystatechange = function (d) {
        if (a.readyState === 4 && a.status === 200) {
            f(a.responseText);
        }
    };
    a.send();
}
;
window.onload = function () {
    // function states() {
    //     function ok(d) {
    //         var b = JSON.parse(d);
    //         Object.keys(b).forEach(function (e) {
    //             if (g(e)) {
    //                 g(e).innerHTML = b[e];
    //             }
    //             ;
    //         });
    //     }
    //     ;
    //     function checkFactor() {
    //         var fi = g('factorCold');
    //         var fu = g('factorHot');
    //         if (fi.value == 2) {
    //             g('fc_fb_control').removeAttribute('hidden');
    //         } else {
    //             g('fc_fb_control').setAttribute('hidden', true);
    //         }
    //         if (fu.value == 2) {
    //             g('fh_fb_control').removeAttribute('hidden');
    //         } else {
    //             g('fh_fb_control').setAttribute('hidden', true);
    //         }
    //     }
    //     ;
    //     checkFactor();
    //     send('/states', 500, ok);
    //     if (parseInt(g('elapsed').textContent) < 4) {
    //         clearInterval(j);
    //         alert('Ватериус выключился. Начните настройку заново, зажав кнопку на 5\u201310 секунд.');
    //     }
    // }
    // states();
    // var j = setInterval(states, 2000);
    function ntw() {
        function ok2(a) {
            var h = '<h3>Выберите свою Wi-Fi сеть</h3>';
            g('networks').innerHTML = h.concat(a);
            clearInterval(loadn);
        }
        ;
        send('/networks', 7000, ok2);
    }
    ntw();
    var loadn = setInterval(ntw, 8000);
    // function mailCh() {
    //     var mail = g('wmail');
    //     if (mail.value == 'test@waterius.ru') {
    //         mail.value = '';
    //     }
    // }
    // mailCh();
};
// function advSett() {
//     var a = g('chbox');
//     var b = 'none';
//     if (a.checked) {
//         b = 'block';
//     }
//     g('advanced').style.display = b;
// }
// ;
// function c(a) {
//     g('s').value = a.innerText || a.textContent;
//     g('p').focus();
// }
// ;