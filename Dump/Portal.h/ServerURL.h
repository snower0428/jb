/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableDictionary;

@interface ServerURL : XXUnknownSuperclass {
	NSMutableDictionary* _dictionary;
	NSString* _ccdc_KjqyURL;
@private
	NSString* _qrcode_http;
	NSString* _qrcode_https;
}
@property(retain, nonatomic) NSMutableDictionary* dictionary;
@property(retain, nonatomic) NSString* qrcode_http;
@property(retain, nonatomic) NSString* qrcode_https;
@property(retain, nonatomic) NSString* ccdc_KjqyURL;
@property(retain) NSString* pointURL;
@property(retain) NSString* ccdcURL;
@property(retain) NSString* port;
@property(retain) NSString* longConnectionURL;
@property(retain) NSString* portalServer;
@property(retain) NSString* safepayURL;
@property(retain) NSString* taobaoURL;
@property(retain) NSString* alipayURL;
+(id)sharedServerURL;
-(void)synchronize;
-(id)configFilePath;
-(void)setUrl:(id)url forKey:(id)key;
-(id)urlForKey:(id)key;
-(id)keys;
-(id)init;
-(void)dealloc;
@end

