/**
    Created by Saurabh on 21/02/2019.
*/

var exec = require("cordova/exec");

exports.recordAudio = function(successCallback, errorCallback, durationLimit, viewColor, backgroundColor){
    exec(successCallback, errorCallback, "audioRecorderFlac", "recordAudio", [durationLimit, viewColor, backgroundColor]);    
};

exports.deleteAudioFile = function (successCallback, errorCallback, filepath) {
    exec(successCallback, errorCallback, "audioRecorderFlac", "deleteAudioFile", [filepath]);
};
