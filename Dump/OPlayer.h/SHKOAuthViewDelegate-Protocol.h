//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSError, NSMutableDictionary, NSURL, SHKOAuthView;

@protocol SHKOAuthViewDelegate
- (NSURL *)authorizeCallbackURL;
- (void)tokenAuthorizeCancelledView:(SHKOAuthView *)arg1;
- (void)tokenAuthorizeView:(SHKOAuthView *)arg1 didFinishWithSuccess:(BOOL)arg2 queryParams:(NSMutableDictionary *)arg3 error:(NSError *)arg4;
@end

