//"This work is licensed under the Attribution-NonCommercial-ShareAlike 3.0 Unported License.
// To view a copy of the license, visit http://http://creativecommons.org/licenses/by-nc-sa/3.0/ "
//
//  PictureViewCell.h
//  Timeline
//
//  Created by Alessandro Boron on 14/08/2012.
//  Copyright (c) 2012 Alessandro Boron. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TimelineViewCell.h"

@interface PictureViewCell : TimelineViewCell

@property (weak, nonatomic) IBOutlet UIImageView *pictureImageView;
@property (weak, nonatomic) IBOutlet UIImageView *placeHolderImageView;
@end
