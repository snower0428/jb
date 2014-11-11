/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol WaveResponderDelegate <NSObject>
-(void)onQueryMicrophones:(BOOL)microphones;
-(void)onQueryUserCardSucc:(id)succ;
-(void)onReceivedPaySucc:(id)succ;
-(void)onGetOnePayer:(id)payer;
-(void)onReceiveWaveFinished:(id)finished;
-(void)onStartReceiveWave;
-(void)onNetConnectError:(id)error;
-(void)onCreateTradeSucess:(id)sucess;
-(void)onCreateTradeFail:(id)fail;
@end
