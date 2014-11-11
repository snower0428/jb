/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AudioRecordFinishDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSData, NSString;
@protocol ALPAudioRecordDelegate;

@interface ALPAudioRecord : XXUnknownSuperclass <AudioRecordFinishDelegate> {
@private
	NSData* _cafData;
	NSString* _createAt;
	NSString* _filePath;
	id<ALPAudioRecordDelegate> _delegate;
	double _maxDuration;
	double _minDuration;
}
@property(assign, nonatomic) id<ALPAudioRecordDelegate> delegate;
@property(retain, nonatomic) NSString* filePath;
@property(retain, nonatomic) NSString* createAt;
@property(assign, nonatomic) double minDuration;
@property(assign, nonatomic) double maxDuration;
@property(retain, nonatomic) NSData* cafData;
+(void)requestMicrophonePermission:(id)permission;
-(void).cxx_destruct;
-(void)delegateForCancel;
-(void)delegateForTimeNotEnough;
-(void)delegateForInvalidFilePath;
-(void)delegateForFail;
-(void)delegateForTimeOut:(id)timeOut;
-(void)delegateForSuccess:(id)success;
-(BOOL)removeFileWithURL:(id)url;
-(BOOL)removeFileWithFilePath:(id)filePath;
-(BOOL)isExistFile:(id)file;
-(void)stop;
-(void)cancelRecord;
-(void)changeVoicePower:(float)power;
-(void)voicePowerTimerCallback:(id)callback;
-(id)saveFile:(id)file;
-(void)encodeWave:(id)wave;
-(void)finishRecord;
-(void)audioRecordingFinishForMaxDuration;
-(void)startRecordSavedInFile:(id)file;
-(void)dealloc;
-(id)init;
@end

