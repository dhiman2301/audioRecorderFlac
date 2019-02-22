//
//  audioRecorderLinear.h
//
//  Created by Saurabh on 21/02/2019.
//
//

#import <Cordova/CDVPlugin.h>
#import "AudioRecorderVC.h"

@interface AudioRecorderPluginLinear : CDVPlugin <OSAudioRecorderDelegate>

@property (strong, nonatomic) CDVInvokedUrlCommand* commandHelper;

- (void) recordAudio:(CDVInvokedUrlCommand*)command;
- (void) deleteAudioFile:(CDVInvokedUrlCommand*)command;

@end
