//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TTPhoto.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MockPhoto : NSObject <TTPhoto>
{
    id <TTPhotoSource> _photoSource;
    NSString *_thumbURL;
    NSString *_smallURL;
    NSString *_URL;
    struct CGSize _size;
    int _index;
    NSString *_caption;
}

@property(copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(nonatomic) int index; // @synthesize index=_index;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) id <TTPhotoSource> photoSource; // @synthesize photoSource=_photoSource;
- (id)URLForVersion:(int)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1 smallURL:(id)arg2 size:(struct CGSize)arg3 caption:(id)arg4;
- (id)initWithURL:(id)arg1 smallURL:(id)arg2 size:(struct CGSize)arg3;

// Remaining properties
@property(readonly, nonatomic) NSString *URLValue;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

