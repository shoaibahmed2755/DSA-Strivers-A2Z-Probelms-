var toCalsius = function(){
    var celsius = (fahrenheit - 32) * 5/9;
    return celsius;
}
var fahrenheit = 100
fahrenheit=parseInt(fahrenheit);
if(isNaN(fahrenheit)){
    alert("Invalid input");
}
else{
    var celsius = toCalsius(fahrenheit);
    console.log(`${fahrenheit}°F is equal to ${celsius.toFixed(2)}°C`);
}