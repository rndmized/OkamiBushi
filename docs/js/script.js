
var leaderboard;

function getScores(){

    $.get( "http://rndmized.pythonanywhere.com/getTop100", function( data ) {
       leaderboard = data; 
       alert( "Load was performed." );
    }).done(function(){
        console.log(leaderboard);
    });


}

function makeTable(container, data) {
    var table = $("<table/>").addClass('CSSTableGenerator');
    $.each(data, function(rowIndex, r) {
        var row = $("<tr/>");
        $.each(r, function(colIndex, c) { 
            row.append($("<t"+(rowIndex == 0 ?  "h" : "d")+"/>").text(c));
        });
        table.append(row);
    });
    return container.append(table);
}

$(document).ready(function() {
    getScores();
    var data = leaderboard
    //var cityTable = makeTable($(document.body), data);
});