/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MSMobileSecurityResult.h"

@class MSSecurityLevel, MSSecuritySettings;

@interface MSQueryAccountSecurityLevelResp : MSMobileSecurityResult {
@private
	MSSecurityLevel* _securityLevel;
	MSSecuritySettings* _securitySettings;
}
@property(retain, nonatomic) MSSecuritySettings* securitySettings;
@property(retain, nonatomic) MSSecurityLevel* securityLevel;
-(void).cxx_destruct;
@end
