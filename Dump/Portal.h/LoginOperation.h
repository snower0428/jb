/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BaseOperation.h"

@class NSDictionary, NSString, FetchRSAPKeyOperation;

@interface LoginOperation : BaseOperation {
@private
	BOOL _shouldRememberPassword;
	FetchRSAPKeyOperation* _fetchRSAPKeyOperation;
	NSString* _account;
	NSString* _password;
	NSString* _type;
	NSDictionary* _extraParams;
}
@property(retain, nonatomic) FetchRSAPKeyOperation* fetchRSAPKeyOperation;
@property(assign, nonatomic) BOOL shouldRememberPassword;
@property(retain, nonatomic) NSDictionary* extraParams;
@property(retain, nonatomic) NSString* type;
@property(retain, nonatomic) NSString* password;
@property(retain, nonatomic) NSString* account;
-(void)operationDidFinish:(id)operation;
-(void)main;
-(id)init;
-(void)dealloc;
@end
