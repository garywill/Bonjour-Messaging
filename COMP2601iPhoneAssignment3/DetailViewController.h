//
//  DetailViewController.h
//  COMP2601iPhoneAssignment3
//
//  Created by Devin Lynch on 2013-03-29.
//  Copyright (c) 2013 Carleton. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
