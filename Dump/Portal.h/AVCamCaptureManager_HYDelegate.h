/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"


@protocol AVCamCaptureManager_HYDelegate
@optional
-(void)showPreview;
-(void)hidePreview;
-(void)processPreview:(opaqueCMSampleBuffer*)preview;
-(void)handleCaptureData:(opaqueCMSampleBuffer*)data;
-(void)deviceCountChanged;
-(void)recordingFinished;
-(void)recordingBegan;
-(void)someOtherError:(id)error;
-(void)acquiringDeviceLockFailedWithError:(id)error;
-(void)captureStillImageFailedWithError:(id)error;
@end
