/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Message.h"

@class NSString;

@interface StatMessage : Message {
@private
	NSString* _month;
	NSString* _monthInc;
	NSString* _monthDec;
	NSString* _statistDesc;
}
@property(retain, nonatomic) NSString* statistDesc;
@property(retain, nonatomic) NSString* monthDec;
@property(retain, nonatomic) NSString* monthInc;
@property(retain, nonatomic) NSString* month;
-(void).cxx_destruct;
-(id)initWithRpcMessageEntry:(id)rpcMessageEntry;
@end

