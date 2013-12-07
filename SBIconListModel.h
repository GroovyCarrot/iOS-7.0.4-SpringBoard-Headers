/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

#import "NSFastEnumeration-Protocol.h"
#import "SBIconIndexMutableListObserver-Protocol.h"
#import "SBIconIndexNode-Protocol.h"

@class NSHashTable, SBFolder, SBIconIndexMutableList;

@interface SBIconListModel : _ABAddressBookCopyLocalizedLabel <SBIconIndexNode, SBIconIndexMutableListObserver, NSFastEnumeration>
{
    SBIconIndexMutableList *_icons;
    NSHashTable *_nodeObservers;
    NSHashTable *_listObservers;
    BOOL _iconStateIsDirty;
    SBFolder *_folder;
}

+ (unsigned int)maxIcons;
+ (Class)viewClass;
- (unsigned int)countByEnumeratingWithState:(CDAnonymousStruct1 *)fp8 objects:(id *)fp12 count:(unsigned int)fp16;
- (void)list:(id)fp8 didRemoveContainedNodeIdentifiers:(id)fp12;
- (void)list:(id)fp8 didAddContainedNodeIdentifiers:(id)fp12;
- (id)nodeDescriptionWithPrefix:(id)fp8;
- (void)removeNodeObserver:(id)fp8;
- (void)addNodeObserver:(id)fp8;
- (id)nodesAlongIndexPath:(id)fp8 consumedIndexes:(unsigned int)fp12;
- (id)indexPathsForContainedNodeIdentifier:(id)fp8 prefixPath:(id)fp12;
- (id)containedNodeIdentifiers;
- (BOOL)containsNodeIdentifier:(id)fp8;
- (id)nodeIdentifier;
- (void)_notifyListObservers:(id)fp(null);
- (void)removeListObserver:(id)fp8;
- (void)addListObserver:(id)fp8;
- (void)warmUpIconImages;
- (id)description;
- (BOOL)matchesRepresentation:(id)fp8;
- (id)representation;
- (BOOL)resetWithRepresentation:(id)fp8 model:(id)fp12 overflowNodes:(id)fp16 leafIdentifiersAdded:(id)fp20;
- (void)markIconStateClean;
- (BOOL)isIconStateDirty;
- (id)iconsOfClass:(Class)fp8;
- (unsigned int)compactIcons;
- (BOOL)needsCompacting;
- (BOOL)isFull;
- (BOOL)isEmpty;
- (unsigned int)firstFreeSlotIndexForType:(int)fp8;
- (unsigned int)firstFreeSlotIndex;
- (void)removeIcon:(id)fp8;
- (void)removeIconAtIndex:(unsigned int)fp8;
- (id)insertIcon:(id)fp8 atIndex:(unsigned int *)fp12;
- (id)placeIcon:(id)fp8 atIndex:(unsigned int *)fp12;
- (BOOL)addIcon:(id)fp8 asDirty:(BOOL)fp12;
- (BOOL)addIcon:(id)fp8;
- (BOOL)allowsAddingIcon:(id)fp8;
- (BOOL)containsLeafIconWithIdentifier:(id)fp8;
- (BOOL)containsIcon:(id)fp8;
- (unsigned int)indexForLeafIconWithIdentifier:(id)fp8;
- (unsigned int)indexForIcon:(id)fp8;
- (id)iconAtIndex:(unsigned int)fp8;
- (id)icons;
- (unsigned int)numberOfIcons;
- (id)folder;
- (void)dealloc;
- (id)initWithFolder:(id)fp8;

@end
