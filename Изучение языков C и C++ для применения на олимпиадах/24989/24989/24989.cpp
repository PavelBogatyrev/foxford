template <typename iter>
void reverse_vector(iter begin, iter end)
{
    end -= 1;
    int tmp;
    while (begin < end) {
        swap(*begin, *end);
        begin++;
        end--;
    }
}