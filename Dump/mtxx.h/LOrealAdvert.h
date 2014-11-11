//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface LOrealAdvert : NSObject
{
    int _model;
    int _display;
    int _timeout;
    int _vertype;
    NSString *_modelString;
    NSString *_version;
    NSString *_picUrl;
    NSString *_picView;
    NSString *_linkUrl;
    NSString *_tagView;
    NSString *_tagClick;
    NSString *_adClick;
    NSDictionary *_adInfo;
}

+ (id)orealWithJsonDictionary:(id)arg1;
@property(retain, nonatomic) NSDictionary *adInfo; // @synthesize adInfo=_adInfo;
@property(copy, nonatomic) NSString *adClick; // @synthesize adClick=_adClick;
@property(copy, nonatomic) NSString *tagClick; // @synthesize tagClick=_tagClick;
@property(copy, nonatomic) NSString *tagView; // @synthesize tagView=_tagView;
@property(copy, nonatomic) NSString *linkUrl; // @synthesize linkUrl=_linkUrl;
@property(copy, nonatomic) NSString *picView; // @synthesize picView=_picView;
@property(copy, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *modelString; // @synthesize modelString=_modelString;
@property(nonatomic) int vertype; // @synthesize vertype=_vertype;
@property(nonatomic) int timeout; // @synthesize timeout=_timeout;
@property(nonatomic) int display; // @synthesize display=_display;
@property(nonatomic) int model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)updateWithJSonDictionary:(id)arg1;
- (id)initWithJsonDictionary:(id)arg1;

@end

