//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GCKPB_PBArray, GCKPB_PBMutableArray;

__attribute__((visibility("hidden")))
@interface GCKPB_PBField : NSObject
{
    int number_;
    GCKPB_PBMutableArray *mutableVarintList_;
    GCKPB_PBMutableArray *mutableFixed32List_;
    GCKPB_PBMutableArray *mutableFixed64List_;
    GCKPB_PBMutableArray *mutableLengthDelimitedList_;
    GCKPB_PBMutableArray *mutableGroupList_;
}

@property(readonly, nonatomic) int number; // @synthesize number=number_;
@property(readonly, nonatomic) GCKPB_PBArray *groupList; // @synthesize groupList=mutableGroupList_;
@property(readonly, nonatomic) GCKPB_PBArray *lengthDelimitedList; // @synthesize lengthDelimitedList=mutableLengthDelimitedList_;
@property(readonly, nonatomic) GCKPB_PBArray *fixed64List; // @synthesize fixed64List=mutableFixed64List_;
@property(readonly, nonatomic) GCKPB_PBArray *fixed32List; // @synthesize fixed32List=mutableFixed32List_;
@property(readonly, nonatomic) GCKPB_PBArray *varintList; // @synthesize varintList=mutableVarintList_;
- (id)description;
- (unsigned int)serializedSizeAsMessageSetExtension;
- (void)writeAsMessageSetExtensionToOutput:(id)arg1;
- (unsigned int)serializedSize;
- (void)writeToOutput:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

