/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDate;

@interface ALCRequestReasonDO : XXUnknownSuperclass {
@private
	int _id;
	NSDate* _gmtCreate;
	NSDate* _gmtModified;
	NSString* _reason;
	NSString* _type;
}
@property(retain, nonatomic) NSString* type;
@property(retain, nonatomic) NSString* reason;
@property(retain, nonatomic) NSDate* gmtModified;
@property(retain, nonatomic) NSDate* gmtCreate;
@property(assign, nonatomic) int id;
-(void).cxx_destruct;
@end
