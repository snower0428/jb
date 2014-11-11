/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "PPChatActionSource.h"

@class NSString;

@interface NewsItem : XXUnknownSuperclass <NSCoding, PPChatActionSource> {
@private
	NSString* _title;
	NSString* _image;
	NSString* _description;
	NSString* _url;
	NSString* _linkText;
	NSString* _actionType;
	NSString* _actionParam;
	NSString* _authType;
}
@property(retain, nonatomic) NSString* authType;
@property(retain, nonatomic) NSString* actionParam;
@property(retain, nonatomic) NSString* actionType;
@property(retain, nonatomic) NSString* linkText;
@property(retain, nonatomic) NSString* url;
@property(retain, nonatomic) NSString* description;
@property(retain, nonatomic) NSString* image;
@property(retain, nonatomic) NSString* title;
-(void).cxx_destruct;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
@end
