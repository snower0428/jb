/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface WXApi : XXUnknownSuperclass {
}
+(BOOL)sendResp:(id)resp;
+(BOOL)sendReq:(id)req;
+(BOOL)handleOpenURL:(id)url delegate:(id)delegate;
+(id)parseURLParams:(id)params;
+(BOOL)openWXApp;
+(id)getApiVersion;
+(id)getWXAppInstallUrl;
+(BOOL)isWXAppSupportApi;
+(BOOL)isWXAppInstalled;
+(BOOL)registerApp:(id)app withDescription:(id)description;
+(BOOL)registerApp:(id)app;
@end
