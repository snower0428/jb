/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDate;

@interface startupPageAppInfo : XXUnknownSuperclass {
@private
	BOOL _isDelay;
	NSDate* _startTime;
	NSDate* _endTime;
	int _showTime;
	int _gradualTime;
	NSString* _url;
}
@property(retain, nonatomic) NSString* url;
@property(assign, nonatomic) BOOL isDelay;
@property(assign, nonatomic) int gradualTime;
@property(assign, nonatomic) int showTime;
@property(retain, nonatomic) NSDate* endTime;
@property(retain, nonatomic) NSDate* startTime;
-(void).cxx_destruct;
-(id)init:(id)init;
-(BOOL)isFileExist:(id)exist;
-(id)getPowerSearchPath;
-(id)dateFromString:(id)string;
@end
