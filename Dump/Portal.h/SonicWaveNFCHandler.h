/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SonicWaveNFCHandler <NSObject>
-(void)onHeadsetOff;
-(void)onHeadsetOn;
-(void)onReceiveDataInfo:(id)info;
-(void)onReceiveDataFailed:(int)failed;
-(void)onReceiveDataTimeout;
-(void)onDataReceived:(id)received;
-(void)onReceiveDataStarted;
-(void)onSendDataInfo:(id)info;
-(void)onSendDataFailed:(int)failed;
-(void)onSendDataTimeout;
-(void)onSendDataStarted;
@end

