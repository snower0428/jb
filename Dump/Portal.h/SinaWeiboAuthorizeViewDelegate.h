/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SinaWeiboAuthorizeViewDelegate <NSObject>
-(void)authorizeViewDidCancel:(id)authorizeView;
-(void)authorizeView:(id)view didFailWithErrorInfo:(id)errorInfo;
-(void)authorizeView:(id)view didRecieveAuthorizationCode:(id)code;
@end
