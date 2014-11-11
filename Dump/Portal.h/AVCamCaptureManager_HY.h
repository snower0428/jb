/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"

@class kkCaptureSession, NSString, AVCaptureDeviceInput, AVCaptureStillImageOutput, CALayer, AVCaptureVideoDataOutput;
@protocol AVCamCaptureManager_HYDelegate;

@interface AVCamCaptureManager_HY : XXUnknownSuperclass <AVCaptureVideoDataOutputSampleBufferDelegate> {
@private
	kkCaptureSession* _session;
	int _orientation;
	int _mirroringMode;
	AVCaptureDeviceInput* _videoInput;
	AVCaptureStillImageOutput* _stillImageOutput;
	AVCaptureVideoDataOutput* _videoDataOutput;
	unsigned _backgroundRecordingID;
	id<AVCamCaptureManager_HYDelegate> _delegate;
	dispatch_queue_s* _capQueue;
	CALayer* _cameraLayer;
}
@property(assign, nonatomic) unsigned backgroundRecordingID;
@property(retain, nonatomic) AVCaptureVideoDataOutput* videoDataOutput;
@property(retain, nonatomic) AVCaptureStillImageOutput* stillImageOutput;
@property(retain, nonatomic) kkCaptureSession* session;
@property(assign, nonatomic) CALayer* cameraLayer;
@property(readonly, assign, nonatomic, getter=isRecording) BOOL recording;
@property(assign, nonatomic) id<AVCamCaptureManager_HYDelegate> delegate;
@property(assign, nonatomic) int whiteBalanceMode;
@property(assign, nonatomic) int exposureMode;
@property(assign, nonatomic) int focusMode;
@property(assign, nonatomic) int torchMode;
@property(assign, nonatomic) int flashMode;
@property(retain, nonatomic) AVCaptureDeviceInput* videoInput;
@property(assign, nonatomic) int mirroringMode;
@property(assign, nonatomic) NSString* sessionPreset;
@property(assign, nonatomic) int orientation;
+(id)connectionWithMediaType:(id)mediaType fromConnections:(id)connections;
+(id)sharedInstance;
-(void)forceFocus;
-(id)audioChannel;
-(BOOL)supportsMirroring;
-(void)setConnectionWithMediaType:(id)mediaType enabled:(BOOL)enabled;
-(void)exposureAtPoint:(CGPoint)point;
-(void)focusAtPoint:(CGPoint)point;
-(BOOL)adjustingFocus;
-(BOOL)hasWhiteBalance;
-(BOOL)hasExposure;
-(BOOL)hasFocus;
-(BOOL)hasTorch;
-(BOOL)hasFlash;
-(unsigned)cameraCount;
-(BOOL)cameraToggle;
-(void)captureStillImage;
-(opaqueCMSampleBuffer*)cropSample:(opaqueCMSampleBuffer*)sample withRect:(CGRect)rect;
-(void)endTiming;
-(void)currentTiming:(id)timing;
-(void)startTiming;
-(void)captureFullResolutionPhoto:(BOOL)photo;
-(BOOL)setupSessionWithPreset:(id)preset;
-(void)setupCameraLayer;
-(id)getSession;
-(void)dealloc;
-(void)cleanStaticInstance;
-(void)stopRunning;
-(void)startRunning;
-(BOOL)isRunning;
-(id)init;
-(id)backFacingCamera;
-(id)frontFacingCamera;
-(id)cameraWithPosition:(int)position;
-(void)captureOutput:(id)output didOutputSampleBuffer:(opaqueCMSampleBuffer*)buffer fromConnection:(id)connection;
@end

