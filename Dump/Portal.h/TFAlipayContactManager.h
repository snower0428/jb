/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TFContactManagerBase.h"

@class DTRpcAsyncCaller;

@interface TFAlipayContactManager : TFContactManagerBase {
@private
	DTRpcAsyncCaller* _queryContactListCaller;
	BOOL forceRefresh;
}
@property(assign, nonatomic) BOOL forceRefresh;
-(void).cxx_destruct;
-(void)cacheContact;
-(void)stopLoadContact;
-(void)transfer2MobileContactArray:(id)array;
-(void)startLoadContact;
-(void)loadNetworkContact;
-(void)loadCachedContact;
-(void)addContact:(id)contact forKey:(id)key toDictionary:(id)dictionary;
-(id)initWithManagerDelegate:(id)managerDelegate;
@end

