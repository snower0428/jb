/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TFPreloadable.h"

@class NSMutableArray, DTRpcAsyncCaller;
@protocol TFCardPreLoadDelegate;

@interface TFCardPreload : TFPreloadable {
@private
	DTRpcAsyncCaller* _queryCardListCaller;
	BOOL _syncing;
	id<TFCardPreLoadDelegate> _delegate;
	NSMutableArray* _cards;
}
@property(retain, nonatomic) NSMutableArray* cards;
@property(assign, nonatomic) id<TFCardPreLoadDelegate> delegate;
-(void).cxx_destruct;
-(void)doFinishedOnMainThread;
-(void)cardListThread:(id)thread;
-(void)updateWithDelegate:(id)delegate;
-(void)writeCacheToFile;
-(BOOL)loadLocalCardsCache;
-(void)resetCards;
-(id)init;
-(void)dealloc;
@end

