/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate, NSString;

@interface LogisticsLtd : XXUnknownSuperclass {
@private
	NSString* ltdId;
	NSString* iconUrl;
	NSString* showNo;
	NSString* available;
	NSString* logisticsCode;
	NSString* logisticsName;
	NSDate* gmtCreate;
	NSDate* gmtModified;
	NSString* _pinYinString;
}
@property(readonly, assign, nonatomic) NSString* pinYinString;
@property(retain, nonatomic) NSDate* gmtModified;
@property(retain, nonatomic) NSDate* gmtCreate;
@property(retain, nonatomic) NSString* logisticsName;
@property(retain, nonatomic) NSString* logisticsCode;
@property(retain, nonatomic) NSString* available;
@property(retain, nonatomic) NSString* iconUrl;
@property(retain, nonatomic) NSString* showNo;
@property(retain, nonatomic) NSString* ltdId;
-(void).cxx_destruct;
-(void)_buildPinName;
@end

