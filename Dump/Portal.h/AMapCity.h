/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface AMapCity : XXUnknownSuperclass {
@private
	int _num;
	NSString* _adcode;
	NSString* _citycode;
	NSString* _city;
}
@property(retain, nonatomic) NSString* adcode;
@property(retain, nonatomic) NSString* citycode;
@property(assign, nonatomic) int num;
@property(retain, nonatomic) NSString* city;
+(id)cityWithName:(id)name num:(int)num citycode:(id)citycode adcode:(id)adcode;
-(void).cxx_destruct;
-(id)description;
@end
