/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class AutoRebuildBaseInfoModel, NSString;
@protocol AutoRebuildMonitorDelegate;

@interface AutoRebuildAmassManager : XXUnknownSuperclass {
@private
	id<AutoRebuildMonitorDelegate> _delegate;
	AutoRebuildBaseInfoModel* _baseInfo;
	NSString* _title;
}
@property(retain, nonatomic) NSString* title;
@property(retain, nonatomic) AutoRebuildBaseInfoModel* baseInfo;
@property(retain, nonatomic) id<AutoRebuildMonitorDelegate> delegate;
-(void).cxx_destruct;
-(void)addXpathLog:(id)log;
-(void)reportDomWithPageId:(id)pageId LogDic:(id)dic;
-(void)newShakeResponseWith:(id)with;
-(void)reqIsNeedDom:(id)dom;
-(void)initInfo;
@end

