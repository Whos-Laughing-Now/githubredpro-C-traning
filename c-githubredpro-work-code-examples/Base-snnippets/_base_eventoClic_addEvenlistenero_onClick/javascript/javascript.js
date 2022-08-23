'use strict'
console.log('Primerasecuencia');
console.log('Segunda secuencia');

//
// ─── TITULOS ────────────────────────────────────────────────────────────────────
//

let nodoTitle = document.querySelector('#title');
// inner sera una propiedad de los elementoas Web (nodos);
nodoTitle.innerHTML = nodoTitle.innerHTML + "<h1> Gana 1.000.000 Euros</h1>";

let nodoSubTitle = document.querySelector('#soubTitle');
// inner sera una propiedad de los elementoas Web (nodos);
nodoSubTitle.innerHTML = nodoSubTitle.innerHTML + "<h2> Atrever!!!! a ser el proximo ganador....</h2>";

//
// ─── LABEL GENERADOR ────────────────────────────────────────────────────────────
//

let nodoLabel = document.querySelector('label');
nodoLabel.innerHTML += " <p>Introduce un nombre ganador</p>";

//texto
let nodosalidaDatos = document.querySelector("#salidaDatos");
nodosalidaDatos.innerHTML = '<h5>Los ganadores son: </h5>';


//ENTRADA DE DATOS AL INPUT
let nodoInput = document.querySelector('#entradaDatos');
console.log('nodoInput.value');

// FUNCION QUE TRATA LOS VALORES DE LA ENTRADA DEL INPUT
btnGanador.addEventListener('click', function () {

    // Cuando acabo de hacer click
    let valorInput = nodoInput.value;
    console.log(valorInput)

    if (valorInput != '') {
        nodosalidaDatos.innerHTML = nodosalidaDatos.innerHTML + "<h3>" + valorInput + '</3>';
        console.log('valorInput')
        console.log(valorInput)
    } else {
        alert("Rellena los campos")
    }


});

//^^declaracion de una variable contador
let reset = 'Seleciona un ganador';
let estado;
let valorInput = 0;

//texto
btnReset.addEventListener('click', function () {
    console.log(reset);
    salidaDatos.innerHTML = reset; // Nivel visual
});

//
// ─── SECTION 2 ──────────────────────────────────────────────────────────────────

//Titulos 
let nodoTitle2 = document.querySelector('#title2');
// inner sera una propiedad de los elementoas Web (nodos);
nodoTitle2.innerHTML = nodoTitle2.innerHTML + "<h1> Gana 1.000.000 Euros</h1>";

let nodoSubTitle2 = document.querySelector('#soubTitle2');
// inner sera una propiedad de los elementoas Web (nodos);
nodoSubTitle2.innerHTML = nodoSubTitle2.innerHTML + "<h2> Atrever!!!! a ser el proximo ganador....</h2>";


let nodoLabel2 = document.querySelector('h4');
nodoLabel2.innerHTML += " <p>Sorteo de nombre aleatorio</p>";


//
// ─── ARRAY DE LISTA DENOMBRES ───────────────────────────────────────────────────────────────
//

let primerNombre = ["Adrián", "Agustín", "Alberto", "Alejandro", "Alexander", "Alexis", "Alonso", "Andrés Felipe", "Ángel", "Anthony", "Antonio", "Bautista", "Benicio", "Benjamín", "Carlos", "Carlos Alberto", "Carlos Eduardo", "Carlos Roberto", "César", "Cristóbal", "Daniel", "David", "Diego", "Dylan", "Eduardo", "Emiliano", "Ramón", "Raúl", "Ricardo", "Rigoberto", "Roberto", "Rolando", "Samuel", "Samuel David", "Santiago", "Santino", "Santos", "Sebastián", "Thiago", "Thiago Benjamín", "Tomás", "Valentino", "Vicente", "Víctor", "Víctor Hugo"];
console.log('primerNombre');
console.log(primerNombre);


let segundoNombre = ["Garcia", "Gonzalez", "Rodriguez", "Fernandez", "Lopez", "Martinez", "Sanchez", "Perez", "Gomez", "Martin", "Jimenez", "Ruiz", "Hernandez", "Diaz", "Moreno", "Alvarez", "Muñoz", "Romero", "Alonso", "Gutierrez", "Navarro", "Torres", "Dominguez", "Carmona", "Crespo", "Roman", "Pastor", "Soto", "Saez", "Velasco", "Soler", "Moya", "Esteban", "Parra", "Bravo", "Gallardo", "Rojas", "Pardo", "Merino", "Franco", "Espinosa", "Luque", "Galan", "Montes", "Rios", "Sierra", "Segura", "Carrillo", "Marcos", "Marti", "Soriano", "Mendoza"];
console.log('segundoNombre');
console.log(segundoNombre);

//
// ─── EVENTO CLICL ───────────────────────────────────────────────────────────────
//
console.log('=> Click boton '); // 9
btnClick.addEventListener('click', function () {
    console.log(btnClick);

    let nomb1 = primerNombre[Math.floor(Math.random() * primerNombre.length)];
    console.log('=> Primer nombre '); // 9
    console.log(nomb1);

    let nomb2 = segundoNombre[Math.floor(Math.random() * segundoNombre.length)];
    console.log('=> Segundo Apellido '); // 9
    console.log(nomb2);

    let ganadores = `${nomb2}   ${nomb1}`;
    console.log('=> Ganador del sorteo '); // 9
    console.log(ganadores);

    document.querySelector("#ganador").style.background = '#0accff';
    document.querySelector("#ganador").innerHTML = ganadores;


});

