
'use strict'
// DIRECTA

console.log("Primera secuencia");
console.log("Segunda secuencia");

  //
    //^^PASO 1  TITLE───────────────────────────────────────────────────────────────────────────
    //

//PINTAR EN LA WEB -- TITLE
    let nodoTitle = document.querySelector( '#title' );
    // inner sera una propiedad de los elementoas Web (nodos);
    nodoTitle.innerHTML =  nodoTitle.innerHTML + "<h1> Bienvenido a un ejercicio mas</h1>";
 
//PINTAR EN LA WEB -- SUBTITLE
    let nodoSubtitulo = document.querySelector( '#subtitulo' );
    // inner sera una propiedad de los elementoas Web (nodos);
    nodoSubtitulo.innerHTML =  nodoSubtitulo.innerHTML + "<h2> El ejercicio de hoy es : </h2>";


    //
    //^^PASO 2 INPUTS ENTRADA DE DATOS ───────────────────────────────────────────────────────────────────────────
    //

//ENTRADA DE DATOS 1 Y SALIDA DE DATOS ---> 


let nodoInput = document.querySelector( '#entradaDatos' );
console.log( 'nodoInput.value' );


function guardarDatos( ){
    // Cuando acabo de hacer click
    let valorInput = nodoInput.value;
    console.log( valorInput )

    if( valorInput != '' ){

        nodosalidaDatos.innerHTML = nodosalidaDatos.innerHTML + '<p> valor 1: --> ' + valorInput +'</p>';
        console.log( 'valorInput' )
        console.log( valorInput )
    }else{
        alert("Rellena los campos")
    }

}
//
let nodosalidaDatos = document.querySelector("#salidaDatos");
nodosalidaDatos.innerHTML = '<h5>Salida de datos input 1 : </h5>';


    //
    //^^PASO 4 BOTTON DE EVENTO CLIC (CUANDO) ───────────────────────────────────────────────────────────────────────────
    //

//Pintar en la web a traves de un ele,ento HTML
function hazAlgunaCosa(){
    console.log("Estoy pintando");
    let nodoDatos = document.querySelector('#datos');
    nodoDatos.innerHTML =  nodoDatos.innerHTML + "<h2> ¡Hola Jose Ya puedes empezar! </h2>";
}
