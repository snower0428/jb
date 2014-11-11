//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, NSString, UIImage;

@interface TMLogicModel_ChannelBrand : NSObject
{
    NSString *_action;
    NSString *_icon;
    long _brandId;
    NSString *_name;
    int _displayType;
    int _flag;
    NSIndexPath *_indexPath;
    UIImage *_imageData;
}

@property(retain, nonatomic) UIImage *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) int flag; // @synthesize flag=_flag;
@property(nonatomic) int displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long brandId; // @synthesize brandId=_brandId;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

