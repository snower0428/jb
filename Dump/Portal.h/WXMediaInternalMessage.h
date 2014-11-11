/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSData;

@interface WXMediaInternalMessage : XXUnknownSuperclass {
@private
	NSString* title;
	NSString* description;
	NSData* thumbData;
	NSString* mediaTagName;
	unsigned objectType;
	NSString* extInfo;
	NSString* fileExt;
	NSData* fileData;
	NSString* mediaUrl;
	NSString* mediaLowBandUrl;
	NSString* mediaDataUrl;
	NSString* mediaLowBandDataUrl;
}
@property(retain, nonatomic) NSData* fileData;
@property(retain, nonatomic) NSString* fileExt;
@property(retain, nonatomic) NSString* extInfo;
@property(retain, nonatomic) NSString* mediaLowBandDataUrl;
@property(retain, nonatomic) NSString* mediaDataUrl;
@property(retain, nonatomic) NSString* mediaLowBandUrl;
@property(retain, nonatomic) NSString* mediaUrl;
@property(assign, nonatomic) unsigned objectType;
@property(retain, nonatomic) NSString* mediaTagName;
@property(retain, nonatomic) NSData* thumbData;
@property(retain, nonatomic) NSString* description;
@property(retain, nonatomic) NSString* title;
+(id)message;
-(void)dealloc;
-(id)init;
@end

