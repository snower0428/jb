//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MTMaterialAreaDetail : NSObject <NSCoding>
{
    int _Id;
    int _count;
    int _updatetime;
    NSString *_url;
    NSString *_thumbnail;
    NSString *_name;
    NSString *_minversion;
    NSString *_maxversion;
}

+ (id)areaDetailWithJsonDictionary:(id)arg1;
@property(copy, nonatomic) NSString *maxversion; // @synthesize maxversion=_maxversion;
@property(copy, nonatomic) NSString *minversion; // @synthesize minversion=_minversion;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) int updatetime; // @synthesize updatetime=_updatetime;
@property(nonatomic) int count; // @synthesize count=_count;
@property(nonatomic) int Id; // @synthesize Id=_Id;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateWithJSonDictionary:(id)arg1;
- (id)initWithJsonDictionary:(id)arg1;

@end

