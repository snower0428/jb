//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NdIconManagerBase.h"

@class NSMutableDictionary;

@interface NdUrlIconManager : NdIconManagerBase
{
    NSMutableDictionary *dicMd5ToUrl;
}

+ (id)singleton;
@property(retain, nonatomic) NSMutableDictionary *dicMd5ToUrl; // @synthesize dicMd5ToUrl;
- (void)didUrlIconDownload:(id)arg1;
- (void)removeIconObserverWithKey:(id)arg1 iconType:(unsigned int)arg2 observer:(id)arg3;
- (id)iconWithKey:(id)arg1 checksum:(id)arg2 iconType:(unsigned int)arg3 observer:(id)arg4;
- (id)downloadIconWithKey:(id)arg1 checksum:(id)arg2 iconType:(unsigned int)arg3;
- (id)md5FromString:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)removeUrlIconObserver:(id)arg1 observer:(id)arg2;
- (id)getUrlIcon:(id)arg1 observer:(id)arg2;
- (void)clearAllCacheImage;

@end
