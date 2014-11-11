/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DTViewController.h"

@class NSString;

@interface PPBaseViewController : DTViewController {
	NSString* sourceId;
	BOOL comeFromPushMessage;
	BOOL shouldRefrush;
	NSString* backButtonTitle;
}
@property(retain, nonatomic) NSString* backButtonTitle;
@property(retain, nonatomic) NSString* sourceId;
@property(assign, nonatomic) BOOL shouldRefrush;
@property(assign, nonatomic) BOOL comeFromPushMessage;
-(void).cxx_destruct;
-(void)removeAllCache;
-(void)removeCache:(id)cache;
-(void)removeLastUserCache:(id)cache;
-(void)cacheToDisk:(id)disk data:(id)data;
-(id)cacheDataWithKey:(id)key;
-(id)currentUserId;
-(void)back;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end
