/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import "NSObject.h"


@protocol AVCaptureVideoDataOutputSampleBufferDelegate <NSObject>
@optional
-(void)captureOutput:(id)output didDropSampleBuffer:(opaqueCMSampleBuffer*)buffer fromConnection:(id)connection;
-(void)captureOutput:(id)output didOutputSampleBuffer:(opaqueCMSampleBuffer*)buffer fromConnection:(id)connection;
@end
