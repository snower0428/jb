//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBFolder.h"

@interface SBNewsstandFolder : SBFolder
{
}

+ (int)maxListCount;
- (id)nodeIdentifier;
- (void)_setDisplayNameFromRepresentation:(id)arg1;
- (BOOL)canAddIcon;
- (id)folderType;
- (BOOL)isNewsstandFolder;
- (Class)folderViewClass;
- (Class)listViewClass;
- (Class)listModelClass;
- (void)setIsOpen:(BOOL)arg1;
- (id)icon;
- (id)init;

@end

