/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class DTAsyncCaller, COCOrder;

@interface COCDataOrderManager : XXUnknownSuperclass {
@private
	DTAsyncCaller* caller;
	COCOrder* order;
}
@property(retain, nonatomic) DTAsyncCaller* caller;
@property(retain, nonatomic) COCOrder* order;
+(id)sharedInstance;
-(void).cxx_destruct;
-(void)setValue:(id)value forKey:(id)key;
-(id)valueForKey:(id)key;
-(void)setHolderName:(id)name;
-(void)setSchool:(id)school;
-(void)setCity:(id)city;
-(void)reset;
-(id)generateOrderConfirmParams;
-(id)_generateAmount;
-(void)submitAccount:(id)account;
-(void)submitOrder:(id)order;
-(BOOL)checkSubmitButtonEnabled;
-(BOOL)checkSubmitButtonWithAlert;
-(BOOL)isIdCardOrder:(id)order;
-(id)init;
@end

