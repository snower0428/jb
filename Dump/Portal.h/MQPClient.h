/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDictionary;

@interface MQPClient : XXUnknownSuperclass {
@private
	BOOL _isFromMinipay;
	id _appNotify;
	NSString* _postUrl;
	id _swichBlock;
	SEL _seletor;
	id _target;
	NSString* _selfIdentifier;
	NSString* _memo;
	NSString* _status;
	NSString* _result;
	NSDictionary* _launchArgs;
	NSString* _launchQueryStr;
}
@property(retain, nonatomic) NSString* launchQueryStr;
@property(retain, nonatomic) NSDictionary* launchArgs;
@property(retain, nonatomic) NSString* result;
@property(retain, nonatomic) NSString* status;
@property(retain, nonatomic) NSString* memo;
@property(retain, nonatomic) NSString* selfIdentifier;
@property(assign, nonatomic) id target;
@property(assign, nonatomic) SEL seletor;
@property(assign, nonatomic) BOOL isFromMinipay;
@property(copy, nonatomic) id swichBlock;
@property(retain, nonatomic) NSString* postUrl;
@property(assign, nonatomic) id appNotify;
+(BOOL)isInitClient;
+(id)shared;
-(id)queryTid;
-(id)getClientId;
-(void)setSwitchMinpayBlock:(id)block;
-(void)shouldMinipayWithTid:(id)tid SessionId:(id)anId AcitonName:(id)name;
-(void)removeCashierWhenMinipayStart:(id)start;
-(void)cleanDataForMinipay;
-(void)reMoveSPView;
-(void)close;
-(void)backToThirdParty;
-(void)backToSafePay;
-(void)setInterOrderString:(id)string scheme:(id)scheme;
-(void)setCallBackFunc:(SEL)func target:(id)target;
-(void)setUrl:(id)url;
-(void)prePay:(id)pay Scheme:(id)scheme AppName:(id)name;
-(void)prePay:(id)pay;
-(void)pay:(id)pay scheme:(id)scheme;
-(void)startFromExBussiness:(BOOL)exBussiness;
-(void)startFromSafePayViewController:(id)safePayViewController;
-(void)setResultMemo:(id)memo status:(id)status result:(id)result;
-(void)initBackData;
-(void)setExternLaunchQueryStr:(id)str;
-(void)setExternLaunchArgs:(id)args;
-(BOOL)MQPViewIsAdded;
-(id)init;
-(void)dealloc;
@end
