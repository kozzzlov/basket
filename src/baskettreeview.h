#ifndef BASKETTREEVIEW_H
#define BASKETTREEVIEW_H

#include <QWidget>

class QModelIndex;

namespace Akonadi {
	class CollectionModel;
	class CollectionFilterProxyModel;
	class CollectionView;
}

//TODO inherits from Akonadi::CollectionView and reimplement contextMenuEvent()
class BasketTreeView : public Akonadi::CollectionView {
	Q_OBJECT

	public:
		BasketTreeView( QWidget *parent = 0 );
		~BasketTreeView();

	private slots:
		void collectionActivated( const QModelIndex& index );
	
	private:
		Akonadi::CollectionModel *mCollectionModel;
		Akonadi::CollectionFilterProxyModel *mCollectionProxyModel;
		Akonadi::CollectionView *mCollectionTree;

		int mCurrentCollectionId;
};

#endif //BASKETTREEVIEW_H