/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@protocol NSFetchedResultsControllerDelegate
@optional
-(id)controller:(id)controller sectionIndexTitleForSectionName:(id)sectionName;
-(void)controllerDidChangeContent:(id)controller;
-(void)controllerWillChangeContent:(id)controller;
-(void)controller:(id)controller didChangeSection:(id)section atIndex:(unsigned)index forChangeType:(unsigned)changeType;
-(void)controller:(id)controller didChangeObject:(id)object atIndexPath:(id)indexPath forChangeType:(unsigned)changeType newIndexPath:(id)path;
@end
