/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;
@protocol NSLocking;

@interface APHTTPCookieStorage : XXUnknownSuperclass {
@private
	NSMutableArray* _cookies;
	id<NSLocking> _locker;
}
@property(retain, nonatomic) id<NSLocking> locker;
@property(retain, nonatomic) NSMutableArray* cookies;
+(id)sharedHTTPCookieStorage;
-(void).cxx_destruct;
-(void)unlock;
-(void)lock;
-(id)cookiesForURL:(id)url;
-(int)indexOfCookie:(id)cookie;
-(void)setCookies:(id)cookies forURL:(id)url mainDocumentURL:(id)url3;
-(void)setCookie:(id)cookie;
-(void)deleteAllCookies;
-(void)deleteCookie:(id)cookie;
-(id)init;
@end
