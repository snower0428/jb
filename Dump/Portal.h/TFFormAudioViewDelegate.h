/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol TFFormAudioViewDelegate <NSObject>
@optional
-(void)audioView:(id)view ReceivedError:(id)error;
-(void)audioView:(id)view ChangedRecordGesture:(BOOL)gesture GestureState:(int)state;
@end
